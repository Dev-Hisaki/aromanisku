package casting;

public class PrimitiveCasting {
    
    public static void main(String[] args) {
        int doubleToInt = (int) 3.14;
        String doubleToString = String.valueOf(doubleToInt);
        System.out.println("Ini adalah Castin Double ke Int     : " + doubleToInt);
        System.out.println("Ini adalah Casting Double ke String : " + doubleToString);
    }
}
