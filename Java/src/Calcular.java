public class Calcular
{
    private int[] vector_numeros;
    private int[] vector_pos;
    private int[] vector_neg;
    private int p;
    private int n;
    
    public Calcular()
    {
        vector_numeros = new int [12];
        p = 0;
        n = 0;
    }
    
    private void definirV(int p, int n)
    {
        vector_pos = new int [p];
        vector_neg = new int [n];
    }
    
    public void longitudDeLosVectores()
    {
        for(int i = 0; i < 12; i++)
        {
            if(vector_numeros[i] < 0)
            {
                n++;
            }
            else//sino
            {
                p++;
            }
        }
        definirV(p, n);
        setLongitudPos(p);
        setLongitudNeg(n);
    }
    
    public void agruparVectores()
    {
        int temp1, temp2;
        temp1 = 0;
        temp2 = 0;
        
        for(int i = 0; i < 12; i++)
        {
            if(vector_numeros[i] < 0)
            {
                vector_neg[temp1] = vector_numeros[i];
                temp1++;
            }
            else
            {
                vector_pos[temp2] = vector_numeros[i];
                temp2++;
            }
        }
    }
    
    public void setNumeros(int pos, int val)
    {
        vector_numeros[pos] = val;
    }
    
    public int getNumeros(int pos)
    {
        return vector_numeros[pos];
    }
    
    public void setNumerosPos(int pos, int val)
    {
        vector_pos[pos] = val;
    }
    
    public int getNumerosPos(int pos)
    {
        return vector_pos[pos];
    }
    
    public void setNumerosNeg(int pos, int val)
    {
        vector_neg[pos] = val;
    }
    
    public int getNumerosNeg(int pos)
    {
        return vector_neg[pos];
    }
    
    public void setLongitudPos(int val)
    {
        p = val;
    }
    
    public int getLongitudPos()
    {
        return p;
    }
    
    public void setLongitudNeg(int val)
    {
        n = val;
    }
    
    public int getLongitudNeg()
    {
        return n;
    }
}