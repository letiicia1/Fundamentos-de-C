 class QuicksortLast extends Geracao {

        /**
         * Construtor.
         */
       public QuicksortLast(){
          super();
       }
    
    
        /**
         * Construtor.
         * @param int tamanho do array de numeros inteiros.
         */
       public QuicksortLast(int tamanho){
          super(tamanho);
       }
    
    
        /**
         * Algoritmo de ordenacao Quicksort.
         */
       @Override
       public void sort() {
        quicksortLastPivo(0, n-1);
       }
    
    private void quicksortLastPivo( int esq, int dir)
    {
        int i = esq, j = dir;
        int pivo = array[dir];
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
        if (esq < j)  quicksortLastPivo(esq, j);
        if (i < dir)  quicksortLastPivo(i, dir);
    }

 }