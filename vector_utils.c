//
// Created by matuj on 10.01.2022.
//

#include "vector_utils.h"
#include <stdio.h>


//int read_vector_float(float *vec, int size, float stop_value)
//{
//    if(vec==NULL)
//    {
//        return -1;
//    }
//
//    if (size<1)
//    {
//        return -1;
//    }
//
//    for(int j=0; j<size; j++)
//    {
//        int result;
//        result = scanf("%f", &*(vec+j));
//        if (result==0)
//        {
//            return -1;
//        }
//        if ( *(vec+j) == stop_value )
//        {
//            break;
//        }
//    }
//
//
//    while(getchar()!='\n'){}
//
//
//    int rozm=0;
//    while (rozm < size && *(vec+rozm) != stop_value)
//    {
//        rozm++;
//    }
//
//    return rozm;
//}



//int read_vector_ll(long long *vec, int size, int stop_value)
//{
//    if(vec==NULL)
//    {
//        return -1;
//    }
//
//    if (size<1)
//    {
//        return -1;
//    }
//    for(int j=0; j<size; j++)
//    {
//        int result;
//        result = scanf("%lld", &*(vec+j));
//        if (result==0)
//        {
//            return -1;
//        }
//        if ( *(vec+j) == stop_value )
//        {
//            break;
//        }
//    }
//
//
//    while(getchar()!='\n'){}
//
//
//    int rozm=0;
//    while (rozm < size && *(vec+rozm) != stop_value)
//    {
//        rozm++;
//    }
//
//    return rozm;
//}
//
//
//void display_vector_ll(const long long *vec, int size)
//{
//    if (size < 1 || vec==NULL)
//    {
//        return;
//    }
//
//    for(int i=0; i<size; i++)
//    {
//        printf("%lld ", *(vec+i));
//    }
//    printf("\n");
//}