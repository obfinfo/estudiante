import java.util.Scanner;

//matrices

public class bloque8 {
    public static void main() {
        ejercicio7();
    }

    public static void ejercicio1() {
        // matriz simetrica
        String[] labels = { "Filas: ", "Columnas: " };
        Scanner entrada = new Scanner(System.in);

        String[] dim1 = new String[2];
        dim1 = metodos.MultiInput(labels, "Bloque 8 Ejercicio 1");

        int matriz1[][] = new int[Integer.parseInt(dim1[0])][Integer.parseInt(dim1[1])];

        matriz1 = metodos.llenarMatriz(Integer.parseInt(dim1[1]), Integer.parseInt(dim1[0]));

        //transpuesta
        int cont=0;
        if (Integer.parseInt(dim1[0]) == Integer.parseInt(dim1[1])) {
            for (int i = 0; i < Integer.parseInt(dim1[0]); i++) {
                for (int k = 0; k < Integer.parseInt(dim1[1]); k++) {             
                    if (matriz1[i][k] == matriz1[k][i]) {
                        cont++;
                    }
                }
            }
            if (cont==(Integer.parseInt(dim1[0])*Integer.parseInt(dim1[1]))) {
                System.out.println("La matriz es simetrica");
            }else{
                System.out.println("La matriz No es simetrica");
            }
        }else{
            System.out.println("La Matriz no es cuadrada");
        }
        entrada.close();
    }

    public static void ejercicio5() {
        String[] labels = { "Filas: ", "Columnas: " };

        String[] dim1 = new String[2];
        dim1 = metodos.MultiInput(labels, "Bloque 8 Ejercicio 5");

        int matriz1[][] = new int[Integer.parseInt(dim1[0])][Integer.parseInt(dim1[1])];

        matriz1 = metodos.llenarMatriz(Integer.parseInt(dim1[1]), Integer.parseInt(dim1[0]));

        for (int i = 0; i < Integer.parseInt(dim1[0]); i++) {
            int suma = 0;
            for (int j = 0; j < Integer.parseInt(dim1[1]); j++) {
                suma+=matriz1[i][j];
            }
            System.out.println("Suma de fila " + i +": " + suma);
        }

        System.out.println();

        for (int i = 0; i < Integer.parseInt(dim1[1]); i++) {
            int suma = 0;
            for (int j = 0; j < Integer.parseInt(dim1[0]); j++) {
                suma+=matriz1[j][i];
            }
            System.out.println("Suma de columna " + i +": " + suma);
        }

    }

    public static void ejercicio7() {
        int orden=5;
        int matriz[][] = new int[orden][orden];

        for (int i = 0; i < matriz.length; i++) {
            for (int j = 0; j < matriz.length; j++) {
                if (i==0 || j==0 || i==orden-1 || j ==orden-1) {
                    matriz[i][j]=1;
                }
            }
        }
        for (int i = 0; i < matriz.length; i++) {
            for (int j = 0; j < matriz.length; j++) {
                System.out.print("" + matriz[i][j] + " ");
            }
            System.out.println();
        }
    }



















}
