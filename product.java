public class product
{
    
   /* public static void main(String[]args)       //using only if
    {
        short p1=499;short p2=299;short p3=149;short p4=299;
        float bill= p1+p2+p3+p4;
        if(bill<1999)
        {
            float discount=0.1f*bill;
            bill=bill-discount;
            System.out.println("total bill="+bill);
            return;
        }
        float discount= 0.2f*bill;
        bill=bill-discount;
        System.out.println("total bill="+bill);
        return;

    }*/
    public static void main(String[]args) //using if and else
    {
        short p1=499;short p2=299;short p3=149;short p4=299;
        float bill= p1+p2+p3+p4;
        bill-=((bill<1999)?0.1f*bill:0.2f*bill);
        System.out.println("total bill="+bill);

    }
}

