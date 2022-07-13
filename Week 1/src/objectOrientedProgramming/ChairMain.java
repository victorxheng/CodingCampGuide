package objectOrientedProgramming;

public class ChairMain
{
    //credit: Matthew
    public static void main(String[] args)
    {
        Chair janschair = new Chair(4,true,100);
        Chair aaronsChair = new Chair(4,true,20);
        aaronsChair.destroyChair();
        janschair.removeOccupant();
    }
}
