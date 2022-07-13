package objectOrientedProgramming;

public class Point {
    private double x;
    private double y;

    public Point(double x, double y){
        this.x = x;
        this.y = y;
    }

    public void swapXY(){
        double temp = x;
        x = y;
        y = temp;
    }
    //accessors
    public double getX(){
        return x;
    }
    public double getY(){
        return y;
    }
    //mutators
    public void setX(double x){
        this.x = x;
    }
    public void setY(double y){
        this.y = y;
    }
}
