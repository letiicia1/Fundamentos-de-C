 class QuicksortRandom extends Geracao {

        /**
         * Construtor.
         */
       public QuicksortRandom(){
          super();
       }
    
    
        /**
         * Construtor.
         * @param int tamanho do array de numeros inteiros.
         */
       public QuicksortRandom(int tamanho){
          super(tamanho);
       }
    
    
        /**
         * Algoritmo de ordenacao Quicksort.
         */
       @Override
       public void sort() {
        quicksortRandomPivo(0, n-1);
       }
    
    private void quicksortRandomPivo( int esq, int dir)
    {
      int i = esq, j = dir;
      int random = (int)(Math.random() * (dir - esq + 1) + esq);
  
      int pivo = array[random];
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
      if (esq < j)  quicksortRandomPivo(esq, j);
      if (i < dir)  quicksortRandomPivo(i, dir);
  }

 }