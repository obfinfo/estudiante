//ordenamiento

public class bloque6 {
    public static void main() {
        int[] vector = {1,8,2,35,65,3,5};
        boolean flag = true; int aux = 0, i = 0;

        while (flag) {
            for (int j = 0; j < vector.length-1; j++) {
                if (vector[j] > vector[j+1] ) {
                    aux =  vector[j+1];
                    vector[j+1] = vector[j];
                    vector[j] = aux;
                }
            } i++;
            flag = (i==vector.length-1) ? false : true;
        }

        for (int j = 0; j < vector.length; j++) {
            System.out.print(vector[j] + " ");
        }
        System.out.println(" ");
    }
}
