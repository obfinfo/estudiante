import javax.swing.JOptionPane;

//busquedas

public class bloque7 {
    public static void main() {
        binarioMejorado();
    }


    public static void binario() {
/**
 * Algorigmo grafico:
 *           * (1,2,3,4) ; delimitador=2
 *         /   \
 *  (1,2) *     * (3,4) ; num < delimitador then left
 *      / \    / \
 *    1*  2*  *3  *4
 */

        int[] array = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,16,17,18,19,20,21,652,710,900};
        int num = 0, right=0, left=array.length-1,mid,cont=1;
        boolean flag=true;

        num= Integer.parseInt( JOptionPane.showInputDialog("Numero a buscar: ") );

        for (int i = 0; i < array.length/2; i++) {
            mid=(right+left)/2;
            if (num == array[mid]) {
                flag=true; break;
            } if (num < array[mid]) {
                left=mid-1;
            } else{
                right=mid+1;
            }
            cont++;
        }

        if (flag) {
            System.out.println("Elemento encontrado en: " + cont);
        }else{
            System.out.println("Elemento no encontrado");
        }

    }

    public static void binarioMejorado() {
        int[] array = {1,2,3,4,5,6,7,8,9,10};
        int num = 0, right=0, left=array.length-1,mid;

        num= Integer.parseInt( JOptionPane.showInputDialog("Numero a buscar: ") );

        for (int i = 0; i < array.length/2; i++) {
            mid=(right+left)/2;
            
            System.out.println();
            for (int j = 0; j < array.length; j++) {
                if (right>j){
                    System.out.print("[#]");
                }else{
                    if (j<left+1) {
                        System.out.print("["+array[j]+"]");
                    }else{
                        System.out.print("[#]");
                    }
                }
            }
            System.out.println();
            if (num == array[mid]) {
                break;
            } if (num < array[mid]) {
                left=mid-1;
            } else{
                right=mid+1;
            }
        }
    }






















}
