#include <stdio.h>

#include <stdlib.h>



int main()

{

        char color[10];

            char pluralNoun[10];

                char item1[10];

                    char item2[10];



                        printf("Enter a color: ");

                            scanf("%s", color);

                                printf("Enter a plural noun: ");

                                    scanf("%s", pluralNoun);

                                        printf("Enter an item: ");

                                            scanf("%s%s", item1, item2);



                                                printf("Roses are %s\n", color);

                                                    printf("%s are round\n", pluralNoun);

                                                        printf("This is my %s %s\n", item1, item2);





                                                            return 0;

}
