#include <stdio.h>

int main() {
    int choice = 0;
    int length = 0;
    int add = 0;
    int delete1 = 0;
    int a[100];
    int addNumber;
    int deleteNumber;
    int searchNumber;
    int sort = 0;
    while (choice != 11) {
        printf("--------------MENU--------------\n");
        printf("1. Nhap so phan tu va gia tri cho mang\n");
        printf("2. In ra gia tri cac phan tu trong mang\n");
        printf("3. Dem so luong so hoan hao co trong mang\n");
        printf("4. Tim gia tri nho thu 2 trong mang\n");
        printf("5. Them mot phan tu vao vi tri dau tien trong mang\n");
        printf("6. Xoa phan tu tai mot vi tri cu the\n");
        printf("7. Sap xep mang theo thu tu giam dan\n");
        printf("8. Tim kiem phan tu trong mang\n");
        printf("9. Sap xep lai mang va hien thi toan bo phan tu co trong mang sao cho toan bo so le dung truoc, so chan dung sau\n");
        printf("10. Dao nguoc thu tu cua cac phan tu trong mang va hien thi toan bo\n");
        printf("11. Thoat\n");
        printf("Hay nhap lua chon cua ban: ");
        scanf("%d", &choice);
        if (choice == 1) {
            printf("Hay nhap do dai mang: ");
            scanf("%d", &length);
            for (int i = 0; i < (length + add - delete1); i++) {
                printf("Hay nhap phan tu a[%d]: ", i);
                scanf("%d", &a[i]);
            }
        } else if (choice == 2) {
            if (length == 0) {
                printf("\nBan chua nhap phan tu cho mang\n\n");
            } else {
                printf("Cac phan tu cua mang la:\n");
                for (int i = 0; i < (length + add - delete1); i++) {
                    printf("a[%d] = %d\n", i, a[i]);
                }
            }
        } else if (choice == 3) {
            if (length == 0) {
                printf("\nBan chua nhap phan tu cho mang\n\n");
            } else {
                int condition = 0;
                for (int i = 0; i < (length + add - delete1); i++) {
                    int perfect = 0;
                    for (int j = 1; j < a[i]; j++) {
                        if (a[i] % j == 0) {
                            perfect = perfect + j;
                        }
                    }
                    if (perfect == a[i]) {
                        printf("\nSo hoan hao co trong mang la: %d\n", a[i]);
                        condition++;
                    }
                }
                if (condition == 0) {
                    printf("\nKhong co so hoan hao trong mang\n\n");
                }
            }
        } else if (choice == 4) {
            if (length == 0) {
                printf("\nBan chua nhap phan tu cho mang\n\n");
            } else {
                int max = 0;
                int temp;
                for (int i = 1; i < (length + add - delete1); i++) {
                    if (a[i] > a[max]) {
                        max = i;
                        temp = a[i];
                    }
                }
                a[max] = 0;
                int MAX = 0;
                for (int i = 0; i < (length + add - delete1); i++) {
                    if (a[i] > a[MAX]) {
                        MAX = i;
                    }
                }
                printf("\nSo lon thu 2 trong mang la: %d\n", a[MAX]);
                a[max] = temp;
                printf("\n");
            }
        } else if (choice == 5) {
            if (length == 0) {
                printf("\nBan chua nhap phan tu cho mang\n\n");
            } else {
                for (int i = (length + add - delete1); i > 0; i--) {
                    a[i] = a[i - 1];
                }
                add++;
                printf("Hay nhap phan tu ban muon them vao vi tri dau tien cua mang: ");
                scanf("%d", &addNumber);
                a[0] = addNumber;
            }
        } else if (choice == 6) {
            if (length == 0) {
                printf("\nBan chua nhap phan tu cho mang\n\n");
            } else {
                printf("Hay chon vi tri ban muon xoa phan tu: ");
                scanf("%d", &deleteNumber);
                for (int i = deleteNumber; i < (length + add - delete1); i++) {
                    a[i] = a[i + 1];
                }
                delete1++;
            }
        } else if (choice == 7) {
            if (length == 0) {
                printf("\nBan chua nhap phan tu cho mang\n\n");
            } else {
            }
        } else if (choice == 10) {
            for (int i = 0; i < (length + add - delete1) / 2; i++) {
                int temp = a[i];
                a[i] = a[length + add - delete1 - i - 1];
                a[length + add - delete1 - i - 1] = temp;
            }
        }
    }
    return 0;
}

