 class QuicksortMediana extends Geracao {

        /**
         * Construtor.
         */
       public QuicksortMediana(){
          super();
       }
    
    
        /**
         * Construtor.
         * @param int tamanho do array de numeros inteiros.
         */
       public QuicksortMediana(int tamanho){
          super(tamanho);
       }
    
    
        /**
         * Algoritmo de ordenacao Quicksort.
         */
       @Override
       public void sort() {
        quicksortMedianaPivo(0, n-1);
       }
    
    private void quicksortMedianaPivo( int esq, int dir)
    {
      int i = esq, j = dir;
  
  
      int med = (esq+dir)/2;
  
      if(array[esq] > array[med])
      swap(esq, med);
  
      if(array[esq] > array[dir])
      swap(esq, dir);
  
      if(array[med] > array[dir])
      swap(med, dir);
  
      int pivo = array[med];
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
      if (esq < j)  quicksortMedianaPivo(esq, j);
      if (i < dir)  quicksortMedianaPivo(i, dir);
  }

 }