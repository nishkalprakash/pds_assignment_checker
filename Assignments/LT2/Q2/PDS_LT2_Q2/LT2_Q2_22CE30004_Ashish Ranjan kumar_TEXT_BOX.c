        int a = i+1;

        printf("enter the data of student %d\n ", a);

        scanf("%s %s %d", &arr[i].rollNo[10], &arr[i].branch[2], &dob[10]);

    }

    printf("\n");

    printf(" enter the year : \n");

    scanf("%d", &y);

    for(int i=0; i<n; i++) {

        printf("Remaining Records: \n");

        printf("%s %s %d", arr[i].rollNo[10], arr[i].branch[2], dob[10]);

    }

}