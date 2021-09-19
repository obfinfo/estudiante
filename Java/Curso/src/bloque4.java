//bucles

import javax.swing.Box;
import javax.swing.JLabel;
import javax.swing.JOptionPane;
import javax.swing.JPanel;
import javax.swing.JTextField;

public class bloque4 {

    public static void main() {
        ejercicio18();
    }

    public static String[] MultiInput(String[] labels, String title) {

        String[] resultas = new String[labels.length];
        JTextField[] list = {new JTextField(10), new JTextField(10),new JTextField(10)};
        JPanel myPanel = new JPanel();

        for (int i = 0; i < labels.length; i++) {
            list[i]= new JTextField(5);
            myPanel.add(new JLabel(labels[i]));
            myPanel.add(list[i]);
            myPanel.add(Box.createHorizontalStrut(25));
        }

        int result = JOptionPane.showConfirmDialog(null, myPanel, 
        title, JOptionPane.OK_CANCEL_OPTION);
        
        if (result == JOptionPane.OK_OPTION) {
            for(int i = 0;i<labels.length; i++){
                resultas[i] = list[i].getText();
            }
        }

        return resultas;
       
        
    }

    public static void ejercicio13() {
        

        float nP=0.0f, nN=0.0f, nC=0.0f, sP=0.0f,sN=0.0f,temp=0.0f;

        for (int i = 0; i < 10; i++) {
            System.out.print("Ingrese el numero " + (i+1) + ": ");
            temp = Integer.parseInt( JOptionPane.showInputDialog("Ingrese el numero " + (i+1) + ": "));
            if (temp<0) {
                nN++;
                sN += temp;
            }if (temp==0) {
                nC++;
            }if (temp>0) {
                nP++;
                sP += temp;
            }
        }

        JOptionPane.showMessageDialog(null, 
        "Media de positivos: " + ( sP/nP ) + "\n" +
        "Media de Negativos: " + ( sN/nN ) + "\n" +
        "Ceros: " + nC
        );
    }

    public static void ejercicio17() {
        String result2[] = new String[3];
        final String[] labels2 = {"Codigo", "Litros", "Precio $"};
        int  cantLitros = 0, cant600 =0, cant1 =0;
        float precio = 0.0f;

        for (int i = 1; i <= 5; i++) {

            result2 = MultiInput(labels2, "Factura " + i);

            precio += Integer.parseInt(result2[2]) * Integer.parseInt(result2[1]);
            
            if (Integer.parseInt(result2[0]) == 1) {
                cant1 ++;
                cantLitros += Integer.parseInt(result2[1]);
            }
            if (Integer.parseInt(result2[2]) * Integer.parseInt(result2[1]) > 600) {
                cant600++;
            }
        }

        JOptionPane.showMessageDialog(null, 
        "\tFactura completa\n" +
        "Articulo 1 totales    " + cant1 + "\n" +
        "Litros totales    " + cantLitros + "\n" +
        "Precio total:     "  + precio + "\n" +
        "Mayores a $600    " + cant600
        );

    }

    public static void ejercicio18() {
        String result2[] = new String[3];
        final String[] labels2 = {"Codigo", "Litros"};
        int  cantLitros = 0, cant600 =0, cant1 =0,cant2 =0,cant3 =0;
        float precio = 0.0f;

        for (int i = 1; i <= 5; i++) {
            float precioTemp = 0.0f;

            result2 = MultiInput(labels2, "Factura " + i);
            
            if (Integer.parseInt(result2[0]) == 1) {
                cant1 ++;
                cantLitros += Integer.parseInt(result2[1]);
                precioTemp += Integer.parseInt(result2[1]) * 0.6; 
            }
            if (Integer.parseInt(result2[0]) == 2) {
                cant2 ++;
                cantLitros += Integer.parseInt(result2[1]);
                precioTemp += Integer.parseInt(result2[1]) * 3; 
            }
            if (Integer.parseInt(result2[0]) == 2) {
                cant3 ++;
                cantLitros += Integer.parseInt(result2[1]);
                precioTemp += Integer.parseInt(result2[1]) * 1.5; 
            }
            if (precioTemp > 600) {
                cant600++;
            }
            precio += precioTemp;
        }

        JOptionPane.showMessageDialog(null, 
        "\tFactura completa\n" +
        "Articulo 1 totales    " + cant1 + "\n" +
        "Articulo 2 totales    " + cant2 + "\n" +
        "Articulo 3 totales    " + cant3 + "\n" +
        "Litros totales        " + cantLitros + "\n" +
        "Precio total:         "  + precio + "\n" +
        "Mayores a $600        " + cant600
        );

    }







}









