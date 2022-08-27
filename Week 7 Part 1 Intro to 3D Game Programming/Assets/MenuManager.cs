using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MenuManager : MonoBehaviour
{
    public GameObject EscapeMenu;

    void Start()
    {
        ResumeGame();
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Escape))
        {
            if (EscapeMenu.activeSelf)
            {
                ResumeGame();
            }
            else
            {
                PauseGame();
            }
        }
    }

    public static bool isGamePaused;
    public void PauseGame()
    {
        isGamePaused = true;
        EscapeMenu.SetActive(true);
        Time.timeScale = 0;
    }

    public void ResumeGame()
    {
        isGamePaused = false;
        EscapeMenu.SetActive(false);
        Time.timeScale = 1;
    }

    public void QuitGame()
    {
        Application.Quit();
    }
}
