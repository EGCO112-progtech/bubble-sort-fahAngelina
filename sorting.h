// selection sort function module in C

void display(int a[], int n) {

  int i;

  for (i = 0; i < n; i++)
    printf("%5d", a[i]);
  printf("\n");
}

void s(int data[], int length) {
  int i, j, m, mi;

  display(data, length);
}

void insertion(int a[], int n) {}

void swap(int *a, int *b) {
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}

void bubbleSort(int a[], int n) {

  int i, j;
  int sorted;
  // how may pair to compare?
  for (j = 0; j < n - 1; j++) {
    // printf("round %d\n",j);
    sorted = 0;
    for (i = 0; i < n - 1 - j; i++) {
      if (a[i] > a[i + 1]) {
        swap(&a[i], &a[i + 1]);
        sorted = 1;
      }
      display(a, n);
    }
    if (sorted == 0)
      break;
  }
}

int Isprime(int a) {
  int i;
  if (a == 1)
    return 0;
  for (i = 2; i < a; i++) {
    if (a % i == 0)
      return 0;
  }
  return 1;
}

void selectionSort(int a[], int n) {
  int i, j;
  int m = a[0]; // minimum
  int mi = 0; //ตัวเก็บค่าตน.ที่น้อยที่สุด
  for (j = 0; j < n - 1; j++) { //วนลูปใหญ่
    m = a[j];
    mi = j;
    for (i = j + 1; i < n; i++) {
      if (m > a[i]) {
        m = a[i];
        mi = i;
      }
    }
    swap(&a[j], &a[mi]);
    printf("Minimum is %d\n", m);
    display(a, n);
  }
}
