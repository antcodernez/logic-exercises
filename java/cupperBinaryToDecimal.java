import java.util.Scanner;

public class cupperBinaryToDecimal {
    public static void decimalToBinary(int decimal)
        {
            if(decimal > 0)
                {
                    decimalToBinary(decimal / 2);
                    System.out.println(decimal % 2);
                }
        }
    public static void main(String[]args)
        {
            int number;
            Scanner lector = new Scanner(System.in); //Ingresar datos en consola
            
            System.out.println("Teclea el valor decimal: ");
            number = lector.nextInt();

        }
}
