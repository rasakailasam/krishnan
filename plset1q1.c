import java.util.*;
class strev
{
    public static void main(String args[])
    {
        Scanner in=new Scanner(System.in);
        String st=in.next();
        String rev=" ";
        for ( int i = st.length ()- 1 ; i >= 0 ; i-- )
        {
        rev = rev + st.charAt(i);
        }
        System.out.println(rev);
    }
}
