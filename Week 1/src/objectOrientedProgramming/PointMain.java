package objectOrientedProgramming;

import java.util.ArrayList;

public class PointMain {
    public static void main(String[] args) {
        Point p1 = new Point(1, 2);
        //creates a point at (1, 2)
        p1.setX(5.2);
        p1.setY(4.9);
        p1.swapXY();
        System.out.println("(" + p1.getX() + ", " +p1.getY() + ")");

        ArrayList<Point> listOfPoints = new ArrayList<>();
        listOfPoints.add(p1);
        listOfPoints.add(new Point(5,3));
        System.out.println("We have " + listOfPoints.size() + " points");

    }
}
