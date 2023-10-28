import java.util.Scanner;

public class Ciclos {
    public static void main(String[] args)
        {
            //Hay que tener cuidado con los casteo de datos por la perdida de informacion
            // byte edad = (byte) 128;
            // byte edad2 = (byte) 256;
            // System.out.println(edad);
            // System.out.println(edad2);
            
            int valorDecimal;
            String binario="";
            Scanner lector = new Scanner(System.in); //Ingresar datos en consola
            
            System.out.println("Teclea el valor decimal: ");
            valorDecimal = lector.nextInt();

            //Procesamiento de datos
            while(valorDecimal > 0)
                {
                    binario = (valorDecimal % 2) + binario;
                    valorDecimal = valorDecimal / 2;
                }//cuando termina una vuelta regresa a la condicion

            //Salida de resultados
            System.out.println("Su binario es: " + binario);
        }
}