package objectOrientedProgramming;

public class ChairMain
{
    //credit: Matthew
    public static void main(String[] args)
    {
        Chair janschair = new Chair(4,true,100);
        Chair aaronsChair = new Chair(4,true,100);
        aaronsChair.destroyChair();
        janschair.removeOccupant();

        System.out.println(janschair.equals(aaronsChair));
    }
}
