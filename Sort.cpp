#include<iostream>
//#include"sort.hpp"
#include <iomanip>


template<typename X>
void selectionSort( X const &array, X const &size )
{
   X  smallest; // index of smallest element
   X i;
   X index;
  
   for ( i = 0; i < size - 1; ++i )
   {
      smallest = i; // first index of remaining array

      // loop to find smallest element
      for ( index = i + 1; index < size; ++index ) {

         if ( array[ index ] < array[ smallest ] ){
            smallest = index;


      swap( &array[ i ], &array[ smallest ] );
   }
  }
 }
} 

// swap values at memory locations h
template<typename Q>
void swap( Q const &element1Ptr, Q const &element2Ptr )
{
   Q hold = *element1Ptr;
   *element1Ptr = *element2Ptr;
   *element2Ptr = hold;
}


int main()
{
   const int arrSz = 10;
   int a[ arrSz ] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };

   std::cout << "Array in original order\n";

   for ( int i = 0; i < arrSz; ++i ){
      std::cout << std::setw( 4 ) << a[ i ];
   }

	
   selectionSort( a, arrSz ); // sort the rray

   std::cout << "\nArray in ascending order\n";

   for ( int j = 0; j < arrSz; ++j ){
      std::cout << std::setw( 4 ) << a[ j ];
   }

   std::cout << std::endl;
   
   
   const int arSi =10;
   float b[ arSi ] = {  4.5656, 10.2365, 10.5622, 4.8998, 68.12, 5.06, 33.799,2.5,56.31655, 26.6634 };

   std::cout << "original array order\n";

   for ( int i = 0; i < arSi; ++i ){
      std::cout << std::setw( 4 ) << b[ i ];
   }


   selectionSort( b, arSi ); // sort the array

   std::cout << "\nArray in ascending order\n";

   for ( int j = 0; j < arSi; ++j ){
      std::cout << std::setw( 4 ) << b[ j ];
   }

   std::cout << std::endl;



} 




