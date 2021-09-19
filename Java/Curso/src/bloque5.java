//vectores    

import java.util.Scanner;

public class bloque5 {
    public static void main() {
        ejercicio16();
    }

    public static void ejercicio2() {
        Scanner entrada = new Scanner(System.in);
        int[] arreglo = new int[5];

        for (int i = 0; i < arreglo.length; i++) {
            System.out.print("numero " + (i+1) + ": ");
            arreglo[i] = entrada.nextInt();
        }

        System.out.print("\nVector resultante:  ");
        for (int j = arreglo.length-1; j >= 0; j--) {
            System.out.print("[" + arreglo[j]+ "] ");
        }

        System.out.println(" ");

        entrada.close();
    }

    public static void ejercicio4() {
        Scanner entrada = new Scanner(System.in);
        int[] init = new int[10];

        for (int i = 0; i < init.length; i++) {
            System.out.print("numero " + (i+1) + ": ");
            init[i] = entrada.nextInt();
        }

        System.out.print("\nVector resultante:  ");
        for (int i = 0; i < init.length/2; i++) {
            System.out.print("["+init[i]+"]["+init[init.length-1-i]+"]");
        }
        System.out.println(" ");
        entrada.close();
    }

    public static void ejercicio7() {
        Scanner entrada = new Scanner(System.in);
        int[] init = new int[10];
        int contI = 0, contD = 0;

        for (int i = 0; i < init.length; i++) {
            System.out.print("numero " + (i+1) + ": ");
            init[i] = entrada.nextInt();
        }

        for (int i = 0; i < init.length-1; i++) {
            if (init[i] < init[i+1]) {
                contI++;
            }if (init[init.length-1-i] < init[init.length-2-i]) {
                contD++;
            }
        }

        if (contI == init.length-1 || contD == init.length-1) {
            if (contI == init.length-1) {
                System.out.println("Arreglo ordenado de forma ascendente");
            }else{
                System.out.println("Arreglo ordenado de forma descendente");
            }
            
        }else{
            System.out.println("Arreglo desordenado");
        }
        

        entrada.close();
    }

    public static void ejercicio8() {
        Scanner entrada = new Scanner(System.in);
        int[] init = new int[10];
        int numTemp = 0, posTemp = 0;

        for (int i = 0; i < init.length-2; i++) {
            System.out.print("numero " + (i+1) + ": ");
            init[i] = entrada.nextInt();
        }

        System.out.print("Ingrese un numero: ");
        numTemp = entrada.nextInt();
        System.out.print("Ingrese la posicion 1-10: ");
        posTemp = entrada.nextInt();

        System.out.print("\nVector Inicial:    ");
        for (int j = 0; j < init.length; j++) {
            System.out.print("[" + init[j] + "] ");
        }

        //correr un indice
        for (int i = init.length-1; i > posTemp-1; i--) {
            init[i] = init[i-1];
        }

        //insertar numero en posicion
        init[posTemp-1] = numTemp; 


        System.out.print("\nVector resultante: ");
        for (int j = 0; j < init.length; j++) {
            System.out.print("[" + init[j] + "] ");
        }


        System.out.println(" ");
        entrada.close();
    }

    public static void ejercicio9() {
        Scanner entrada = new Scanner(System.in);
        int[] init = new int[10];
        int temp=0;

        for (int i = 0; i < init.length; i++) {
            System.out.print("numero " + (i+1) + ": ");
            init[i] = entrada.nextInt();
        }

        System.out.print("\nVector Inicial:    ");
        for (int j = 0; j < init.length; j++) {
            System.out.print("[" + init[j] + "] ");
        }

        //correr un indice
        temp=init[init.length-1];
        for (int i = init.length-1; i > 0; i--) {
            init[i] = init[i-1];
        }
        init[0] = temp;
               
        System.out.print("\nVector resultante: ");
        for (int j = 0; j < init.length; j++) {
            System.out.print("[" + init[j] + "] ");
        }

        System.out.println(" ");
        entrada.close();
    }

    public static void ejercicio10() {
        Scanner entrada = new Scanner(System.in);
        int[] init = new int[10];
        int temp=0,num=0,dim=init.length;

        for (int i = 0; i < init.length; i++) {
            init[i] = i+1;
        }

        System.out.print("Ingrese N: ");
        num = entrada.nextInt();

        System.out.print("\nVector Inicial:    ");
        for (int j = 0; j < dim; j++) {
            System.out.print("[" + init[j] + "] ");
        }

        //correr un indice
        for (int i = 1; i <= num; i++) {
            temp=init[dim-1];
            for (int j = dim-1; j > 0; j--) {
                init[j] = init[j-1];
            }
            init[0] = temp;
        }

               
        System.out.print("\nVector resultante: ");
        for (int j = 0; j < dim; j++) {
            System.out.print("[" + init[j] + "] ");
        }

        System.out.println(" ");
        entrada.close();
    }

    public static void ejercicio11() {
        Scanner entrada = new Scanner(System.in);
        int[] init = new int[10];
        int numTemp = 0, posTemp = 0; 
        final int dim=init.length;

        for (int i = 1; i <= 5; i++) {
            init[i-1] = i*2;
        }

        System.out.print("Ingrese un numero: ");
        numTemp = entrada.nextInt();

        System.out.print("\nVector Inicial:    ");
        for (int j = 0; j < dim; j++) {
            System.out.print("[" + init[j] + "] ");
        }

        //buscar posicioncorrecta
        int cont = 0;
        for (int i = 0; i < dim-1; i++) {
            if ((init[i] < numTemp && init[i] != 0) && (init[i+1] > numTemp || init[i+1] == 0)) {
                posTemp=i+2;
                cont++;
                break;
            }
            if (init[i] == numTemp) {
                cont=2;
                break;
            }
        }

        //correr un indice
        if (cont == 1) {
            for (int i = dim-1; i > posTemp-1; i--) {
                init[i] = init[i-1];
            }

            //insertar numero en posicion
            init[posTemp-1] = numTemp; 
        }
        else{
            if (cont==2) {
                System.out.print("\nEl numero ya esta en el array");
            }else{
                System.out.print("\nNo se encontro una posicion adecuada");
            }  
        }
        
        System.out.print("\nVector resultante: ");
        for (int j = 0; j < dim; j++) {
            System.out.print("[" + init[j] + "] ");
        }

        System.out.println(" ");
        entrada.close();
    }

    public static void ejercicio16() {
        Scanner entrada = new Scanner(System.in);
        float[] primerParcial = new float[5];
        float[] segundoParcial = new float[5];
        float[] tercerParcial = new float[5];
        float promedioPI = 0, promedioN = 0,promedioPII = 0,promedioPIII = 0;
        int  pos=0;

        for (int i = 0; i < primerParcial.length; i++) {
            System.out.print("\nNota I parcial, Alumno " + (i+1) + ": ");
            primerParcial[i] = entrada.nextFloat();
            System.out.print("Nota II parcial, Alumno " + (i+1) + ": ");
            segundoParcial[i] = entrada.nextFloat();
            System.out.print("Nota III parcial, Alumno " + (i+1) + ": ");
            tercerParcial[i] = entrada.nextFloat();
        }

        for (int i = 0; i < 5; i++) {
            promedioPI+=primerParcial[i];
            promedioPII+=segundoParcial[i];
            promedioPIII+=tercerParcial[i];
        }

        System.out.println("\nPromedio del trimestre: " + ( ((promedioPI/5) + (promedioPII/5) + (promedioPIII/5))/3   ));
        System.out.print("Ingrese N alumno 1-5: ");
        pos=entrada.nextInt();
        promedioN = (primerParcial[pos-1])+(segundoParcial[pos-1])+( tercerParcial[pos-1]);
        System.out.println("\nPromedio del alumno "+pos+": " + (promedioN/3)   );
        
        entrada.close();
    }









}
