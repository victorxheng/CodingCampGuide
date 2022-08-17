using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraController : MonoBehaviour
{
    [SerializeField, Range(0f, 15.0f)] public float PitchSensitivity; //orbit sensitivity
    [SerializeField, Range(0f, 15.0f)] public float YawSensitivity; //orbit sensitivity
    //make sure orbit sensitivities are more than 0 to work

    [SerializeField, Range(0.1f, 5f)] public float ZoomSensitivity; //how much the scroll wheel affect sensitivity

    //how low the Camera can orbit, set it to -90
    [SerializeField] public float PitchLowerLimit;
    //how high the Camera can orbit, set it to 90
    [SerializeField] public float PitchUpperLimit;

    //controls limit for zooming in and out. Set lower to 0, set upper to any larger number
    [SerializeField] public float ZoomLowerLimit;
    [SerializeField] public float ZoomUpperLimit;

    //how fast orbiting is. Just set to a large number
    [SerializeField, Range(0.005f, 2.0f)] public float OrbitalAcceleration;
    [SerializeField, Range(0.005f, 2.0f)] public float ZoomAcceleration;

    //make sure you drag the player here to define who the player object is
    [SerializeField] public Transform FollowTransform;

    //starting variables for our code
    private float _targetZoom = 10;
    private float _targetPitch = 20.0f;
    private float _targetYaw = 0.0f;
    private float _actualZoom = 10.0f;
    private float _actualPitch = 0.0f;
    private float _actualYaw = 0.0f;
    private bool _useOrbit = false;

   
    private Vector3 offset = new Vector3(0, -0.5f, 0);


    private void Update()
    {
        float p = 0;
        float y = 0;
        float xAxis = 0;
        float yAxis = 0;
        bool mouseDown = false;
        if (!mouseDown && Input.GetKey(KeyCode.Mouse0)) //detects the first frame in which the mouse button is pressed
        {
            mouseDown = true;
            xAxis = Input.GetAxis("Mouse X");//gets X of mouse
            yAxis = Input.GetAxis("Mouse Y");//gets Y of mouse
        }

        if (_targetZoom < 1)
        {
            Cursor.lockState = CursorLockMode.Locked;
            Cursor.visible = false;
            if (!mouseDown)
            {
                mouseDown = true;
                xAxis = Input.GetAxis("Mouse X");//gets X of mouse
                yAxis = Input.GetAxis("Mouse Y");//gets Y of mouse
            }
            else
            {
                mouseDown = true;
            }
        }
        else
        {
            Cursor.lockState = CursorLockMode.None;
            Cursor.visible = true;
        }

        if (mouseDown)
        {
            p = yAxis * -PitchSensitivity;
            y = xAxis * YawSensitivity;
            //uses the orbit sensitivities to apply pitch and yaw
        }

        float z = ZoomSensitivity * -Input.mouseScrollDelta.y; //determines new zoom position
        _targetZoom = Mathf.Clamp(_targetZoom + z, ZoomLowerLimit, ZoomUpperLimit);// clamps zoom between limits
        float zoomLerpFactor = Mathf.Clamp(ZoomAcceleration * Time.deltaTime / 0.018f, 0.01f, 1.0f);
        _actualZoom = Mathf.Lerp(_actualZoom, _targetZoom, zoomLerpFactor);
        _targetPitch = Mathf.Clamp(_targetPitch + p, PitchLowerLimit, PitchUpperLimit);
        _targetYaw += y;
        float orbitLerpFactor = Mathf.Clamp(OrbitalAcceleration * Time.deltaTime / 0.018f, 0.01f, 1.0f);
        _actualPitch = Mathf.Lerp(_actualPitch, _targetPitch, orbitLerpFactor);
        _actualYaw = Mathf.Lerp(_actualYaw, _targetYaw, orbitLerpFactor);

        //determines the values for the camera based on sensitivities



    }
    void LateUpdate()
    {
        //applies the values calculated above to the position and rotation of the camera
        var t = transform;
        t.localPosition = FollowTransform == null ? Vector3.zero : FollowTransform.position + offset;
        t.localRotation = Quaternion.identity;
        //determines position of the camera

        var up = t.up;
        t.localRotation = Quaternion.Euler(_actualPitch, 0, 0);
        //where the camera is looking
        t.RotateAround(FollowTransform == null ? Vector3.zero : FollowTransform.position + offset, up, _actualYaw);
        t.localPosition = (up * 0.5f + t.forward * -_actualZoom) + t.localPosition;
    }
}