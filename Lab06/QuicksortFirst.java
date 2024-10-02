class QuicksortFirst extends Geracao {

        /**
         * Construtor.
         */
       public QuicksortFirst(){
          super();
       }
    
    
        /**
         * Construtor.
         * @param int tamanho do array de numeros inteiros.
         */
       public QuicksortFirst(int tamanho){
          super(tamanho);
       }
    
    
        /**
         * Algoritmo de ordenacao Quicksort.
         */
       @Override
       public void sort() {
        quicksortFirstPivo(0, n-1);
       }
    

    private void quicksortFirstPivo( int esq, int dir)
    {
        int i = esq, j = dir;
        int pivo = array[(esq)];
        while (i <= j) 
        {
            while (array[i] < pivo) i++;
            while (array[j] > pivo) j--;
            if (i <= j) {
                swap(i, j);
                i++;
                j--;
            }
        }
        if (esq < j)  quicksortFirstPivo(esq, j);
        if (i < dir)  quicksortFirstPivo(i, dir);
    }

 }


