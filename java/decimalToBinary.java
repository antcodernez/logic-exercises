import java.util.Scanner;

public class decimalToBinary {
    public int sumar(int number, int binary) {
        
        if(number > 0)
            {
                binary = (number % 2) + binary;
                number = number / 2;
                return sumar(number, binary);
            }
        else
            {
                return binary;
            }
    }   
    public static void main(String[] args)
        {
            decimalToBinary number = new decimalToBinary();
            System.out.println(number.sumar(10, 0));
        }
}
