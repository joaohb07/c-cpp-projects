#include <stdio.h>
#include <stdlib.h>


int main(){

    float salary, sons, sons_final, salary_final, parents, num_salary_cq, mCQ = 0, greatest_salary = 0, m_son = 0, m_salary=0;

    int verifica = 0;


    while(verifica==0)
        {
            printf("\nType the salary:\n");
            scanf("%f", &salary);
            if(salary>0)
                {
                    printf("\nType the number of sons:\n");
                    scanf("%f", &sons);
                    parents++;
                    salary_final = salary_final + salary;
                    sons_final = sons_final + sons;
                    if(salary>greatest_salary)
                        {
                            greatest_salary = salary;
                        }
                    if(salary<=150)
                        {
                            num_salary_cq++;
                        }
                }
            else{
                verifica=1;
            }
        }
      m_salary = salary_final/parents;
      m_son = sons_final/parents;
      mCQ = (100*num_salary_cq)/parents;

      printf("\nMean salary:\n%f\nMean sons:\n%f\nBiggest salary:\n%f\n$150,00 salary percentage:\n%f\n",m_salary,m_son,greatest_salary,mCQ);
}
