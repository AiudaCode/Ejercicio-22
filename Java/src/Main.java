
import javax.swing.JOptionPane;

public class Main
{
    public static void main(String[] args)
    {
        Calcular obj = new Calcular();
        int num;
        for(int i = 0; i < 12; i++)
        {
            num = Integer.parseInt(JOptionPane.showInputDialog(null, "Digite valor de la posicion " + i));
            obj.setNumeros(i, num);
        }
        obj.longitudDeLosVectores();
        obj.agruparVectores();
        listarPositivos(obj);
        listarNegativos(obj);
    }
    
    public static void listarPositivos(Calcular obj)
    {
        String datos = "";
        for(int i = 0; i < obj.getLongitudPos(); i++)
        {
            datos = datos + String.valueOf(obj.getNumerosPos(i) + " ");
        }
        JOptionPane.showMessageDialog(null, "DATOS POSITIVOS:\n" + datos);
    }
    
    public static void listarNegativos(Calcular obj)
    {
        String datos = "";
        for(int i = 0; i < obj.getLongitudNeg(); i++)
        {
            datos = datos + String.valueOf(obj.getNumerosNeg(i) + " ");
        }
        JOptionPane.showMessageDialog(null, "DATOS NEGATIVOS:\n" + datos);
    }
}
