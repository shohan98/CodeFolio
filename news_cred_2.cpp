#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

/*
 * Complete the function below.
 */
char* isPangram(int strings_size, char** strings) {
    int i,j,l,k=0,t,n,arr[30];
    char *a;
    n=strings_size;
    for(l=0;l<n;l++){

        for(i=0;i<30;i++)
            arr[i] = 0;
        j = strlen(strings[l]);
        for(i=0;i<j;i++){
            if(strings[l][i] != 32)
            arr[strings[l][i]-97] = 1;

        }
        for(j=0;j<26;j++){

            if(!arr[j])
                break;
        }
        if(j == 26){
            a[k]='1';
        }
        else{
            a[k]='0';
        }

        k++;
    }
    printf("%s",a);
    return a;
}

int main() {
    char *output_path = getenv("OUTPUT_PATH");
    FILE *f;
    if (output_path != NULL) {
        f = fopen(output_path, "w");
    }
    else {
        f = stdout;
    }

    char* res;
    int strings_size = 0;
    scanf("%d\n", &strings_size);

    char* strings[strings_size];
    for(int i = 0; i < strings_size; i++) {
        char* strings_item;
        strings_item = (char *)malloc(512000 * sizeof(char));
        scanf("\n%[^\n]",strings_item);
        strings[i] = strings_item;
    }
    res = isPangram(strings_size, strings);
    fprintf(f, "%s\n", res);

    fclose(f);
    return 0;
}
