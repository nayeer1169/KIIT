#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "assign1_q1.c"
#include "assign1_q2.c"
#include "assign1_q3.c"
#include "assign1_q4.c"
#include "assign1_q5.c"
#include "assign1_q6.c"

#include "assign2_q1.c"
#include "assign2_q2.c"
#include "assign2_q3.c"
#include "assign2_q4.c"
#include "assign2_q5.c"
#include "assign2_q6.c"

#include "assign3_q1.c"
#include "assign3_q2.c"
#include "assign3_q3.c"
#include "assign3_q4.c"
#include "assign3_q5.c"
#include "assign3_q6.c"

#include "assign4_q1.c"
#include "assign4_q2.c"
#include "assign4_q3.c"


#include "assign5_q1.c"

#include "assign6_q1.c"
#include "assign6_q2.c"
#include "assign6_q3.c"

#include "assign7_q1.c"
#include "assign7_q2.c"
#include "assign7_q3.c"
#include "assign7_q4.c"

#include "assign8_q1.c"
#include "assign8_q2.c"
#include "assign8_q3.c"
#include "assign8_q4.c"

#include "assign9_q1.c"
#include "assign9_q2.c"
#include "assign9_q3.c"
#include "assign9_q4.c"

#include "assign10_q1.c"
#include "assign10_q2.c"
#include "assign10_q3.c"

#include "assign11_q1.c"

int main()
{
    int cm;
 
    while (1)
    {
        printf("\n1.Press 1 for lab 1 programs.\n");
        printf("\n2.Press 2 for lab 2 programs.\n");
        printf("\n3.Press 3 for lab 3 programs.\n");
        printf("\n4.Press 4 for lab 4 programs.\n");
        printf("\n5.Press 5 for lab 5 programs.\n");
        printf("\n6.Press 6 for lab 6 programs.\n");
        printf("\n7.Press 7 for lab 7 programs.\n");
        printf("\n8.Press 8 for lab 8 programs.\n");
        printf("\n9.Press 9 for lab 9 programs.\n");
        printf("\n10.Press 10 for lab 10 programs.\n");
        printf("\n11.Press 11 for lab 11 programs.\n");
        printf("\nEnter your choice-: ");
        scanf("%d", &cm);
        switch (cm)
        {
        case 1:
            while (1)
            {
                printf("\n1.Press 1 for Q.1(Lab 01).\n");
                printf("\n2.Press 2 for Q.2(Lab 01).\n");
                printf("\n3.Press 3 for Q.3(Lab 01).\n");
                printf("\n4.Press 4 for Q.4(Lab 01).\n");
                printf("\n5.Press 5 for Q.5(Lab 01).\n");
                printf("\n6.Press 6 for Q.6(Lab 01).\n");
                int A1;
                printf("\nEnter A1(1-6)-: ");
                scanf("%d", &A1);
                switch (A1)
                {
                case 1:
                     
                     
                    function1();
                    break;
                case 2:
                    function2();
                    break;
                case 3:
                    function3();
                    break;
                case 4:
                    function4();
                    break;
                case 5:
                    function5();
                    break;
                case 6:
                    function6();
                    break;
                
                }
            } break;

        case 2:
            while (1)
            {
                printf("\n1.Press 1 for Q.1(Lab 02).\n");
                printf("\n2.Press 2 for Q.2(Lab 02).\n");
                printf("\n3.Press 3 for Q.3(Lab 02).\n");
                printf("\n4.Press 4 for Q.4(Lab 02).\n");
                printf("\n5.Press 5 for Q.5(Lab 02).\n");
                printf("\n6.Press 6 for Q.6(Lab 02).\n");

                int A2;
                printf("\nEnter A2(1-6)-: ");
                scanf("%d", &A2);
                switch (A2)
                {
                case 1:
                   function7();
                    break;
                case 2:
                    function8();
                    break;
                case 3:
                    function9();
                    break;
                case 4:
                    function10();
                    break;
                case 5:
                    function11();
                    break;
                case 6:
                    function12();
                    break;
                
                }
            } break;
        
        case 3:
            while (1)
            {
                printf("\n1.Press 1 for Q.1(Lab 03).\n");
                printf("\n2.Press 2 for Q.2(Lab 03).\n");
                printf("\n3.Press 3 for Q.3(Lab 03).\n");
                printf("\n4.Press 4 for Q.4(Lab 03).\n");
                printf("\n5.Press 5 for Q.5(Lab 03).\n");
                printf("\n6.Press 6 for Q.6(Lab 03).\n");

                int A3;
                printf("\nEnter A3(1-6)-: ");
                scanf("%d", &A3);
                switch (A3)
                {
                case 1:
                    function13();
                    break;
                case 2:
                    function14();
                    break;
                case 3:
                    function15();
                    break;
                case 4:
                    function16();
                    break;
                case 5:
                    function17();
                    break;
                case 6:
                    function18();
                    break;
          
                }
            } break;
        
        case 4:
            while (1)
            {
                printf("\n1.Press 1 for Q.1(Lab 04).\n");
                printf("\n2.Press 2 for Q.2(Lab 04).\n");
                printf("\n3.Press 3 for Q.3(Lab 04).\n");
                int A4;
                printf("\nEnter A4(1-4)-: ");
                scanf("%d", &A4);
                switch (A4)
                {
                case 1:
                    function19();
                    break;
                case 2:
                    function20();
                    break;
                case 3:
                    function21();
                    break;
                }
            } break;
        
        
        case 5:  while (1)
            {
                printf("\n1.Press 1 for Q.1(Lab 05).\n");
                int A5;
                 printf("\nEnter A5(1)-: ");
                scanf("%d", &A5);
                switch (A5)
                {
                case 1:
                    function23();
                    break;
                }
            } break;
        
        case 6:
            while (1)
            {
                printf("\n1.Press 1 for Q.1(Lab 06).\n");
                printf("\n2.Press 2 for Q.2(Lab 06).\n");
                printf("\n3.Press 3 for Q.3(Lab 06).\n");
                int A6;
                printf("\nEnter A6(1-3)-: ");
                scanf("%d", &A6);
                switch (A6)
                {
                case 1:
                    function24();
                    break;
                case 2:
                    function25();
                    break;
                case 3:
                    function26();
                    break;
                }
            } break;
        
        case 7:
            while (1)
            {
                printf("\n1.Press 1 for Q.1(Lab 07).\n");
                printf("\n2.Press 2 for Q.2(Lab 07).\n");
                printf("\n3.Press 3 for Q.3(Lab 07).\n");
                printf("\n3.Press 4 for Q.4(Lab 07).\n");


                
                int A7;
                printf("\nEnter A7(1-4)-: ");
                scanf("%d", &A7);
                switch (A7)
                {
                case 1:
                    function27();
                    break;
                case 2:
                    function28();
                    break;
                case 3:
                    function29();
                    break;
                case 4:
                    function30();
                    break;
                }
            } break;
        
        case 8:
            while (1)
            {
                printf("\n1.Press 1 for Q.1(Lab 08).\n");
                printf("\n2.Press 2 for Q.2(Lab 08).\n");
                printf("\n3.Press 3 for Q.3(Lab 08).\n");
                printf("\n3.Press 4 for Q.4(Lab 08).\n");

                
                int A8;
                printf("\nEnter A8(1-3)-: ");
                scanf("%d", &A8);
                switch (A8)
                {
                case 1:
                    function31();
                    break;
                case 2:
                    function32();
                    break;
                case 3:
                    function33();
                    break;
                case 4:
                    function34();
                    break;
                }
            } break;
        
          
        case 9:
            while (1)
            {
                printf("\n1.Press 1 for Q.1(Lab 09).\n");
                printf("\n2.Press 2 for Q.2(Lab 09).\n");
                printf("\n3.Press 3 for Q.3(Lab 09).\n");
                printf("\n3.Press 3 for Q.3(Lab 09).\n");
                
                int A9;
                printf("\nEnter A9(1-3)-: ");
                scanf("%d", &A9);
                switch (A9)
                {
                case 1:
                    function35();
                    break;
                case 2:
                    function36();
                    break;
                case 3:
                    function37();
                    break;
                case 4:
                    function38();
                    break;
                }
            } break;
        
        case 10:  while (1)
            {
                printf("\n1.Press 1 for Q.1(Lab 10).\n");
                printf("\n1.Press 1 for Q.2(Lab 10).\n");
                printf("\n1.Press 1 for Q.3(Lab 10).\n");

                int A10;
                 printf("\nEnter e10(1)-: ");
                scanf("%d", &A10);
                switch (A10)
                {
                case 1:
                    function39();
                    break;
                case 2:
                    function40();
                    break;
                case 3:
                    function41();
                    break;
                }
            } break;
        case 11:  while (1)
            {
                printf("\n1.Press 1 for Q.1(Lab 10).\n");
                int A11;
                 printf("\nEnter A11(1)-: ");
                scanf("%d", &A11);
                switch (A11)
                {
                case 1:
                    function42();
                    break;                
                }
            } break;    
        
        }
    }
    return 0;
}    