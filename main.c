#include <stdio.h>

int main() {
    int age, goal;
    float weight, height;
    float baseCalories, finalCalories;

    printf("Welcome to the Simple Diet Advisor Program\n");
    printf("-----------------------------------------\n");

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your weight (in kg): ");
    scanf("%f", &weight);

    printf("Enter your height (in cm): ");
    scanf("%f", &height);

    while (age <= 0 || weight <= 0 || height <= 0) {
        printf("\nInvalid input. Age, weight, and height must be positive values.\n");
        
        printf("Enter your age: ");
        scanf("%d", &age);

        printf("Enter your weight (in kg): ");
        scanf("%f", &weight);

        printf("Enter your height (in cm): ");
        scanf("%f", &height);
    }

    printf("\nChoose your diet goal:\n");
    printf("1 - Weight Loss\n");
    printf("2 - Weight Maintenance\n");
    printf("3 - Weight Gain\n");
    printf("Enter your choice: ");
    scanf("%d", &goal);
    
    while(goal <= 0 || goal >= 4){
        printf("\nChoose your diet goal:\n");
        printf("1 - Weight Loss\n");
        printf("2 - Weight Maintenance\n");
        printf("3 - Weight Gain\n");
        printf("Enter your choice: ");
        scanf("%d", &goal);
    }
    

    baseCalories = weight * 24;

    if (goal == 1) {
        finalCalories = baseCalories - 300;
    } else if (goal == 2) {
        finalCalories = baseCalories;
    } else if (goal == 3) {
        finalCalories = baseCalories + 300;
    } else {
        printf("\nInvalid goal selection.\n");
    }

    printf("\n----- Diet Recommendation -----\n");
    printf("Estimated daily calories: %.2f kcal\n", finalCalories);

    if (goal == 1) {
        printf("Recommended diet: Weight Loss\n");
        printf("Suggested foods: vegetables, fruits, lean protein\n");
        printf("Tips: Reduce sugar, eat smaller portions, drink more water\n");
    } 
    else if (goal == 2) {
        printf("Recommended diet: Weight Maintenance\n");
        printf("Suggested foods: rice, vegetables, fruits, protein foods\n");
        printf("Tips: Eat balanced meals and stay active\n");
    } 
    else if (goal == 3) {
        printf("Recommended diet: Weight Gain\n");
        printf("Suggested foods: rice, nuts, dairy, protein foods\n");
        printf("Tips: Eat more frequently and include healthy fats\n");
    }

    printf("\nThank you for using the Diet Advisor Program!\n");
}
