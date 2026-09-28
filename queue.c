#include "DS.h"

/* p-ийн зааж буй Queue-д x утгыг хийнэ */
void q_push(Queue *p, int x)
{
        /* Энд оруулах үйлдлийг хийнэ үү */
}

/* p-ийн зааж буй Queue-с гаргана */
void q_pop(Queue *p)
{
        /* Энд гаргах үйлдлийг хийнэ үү */
}

/* p-ийн зааж буй Queue-н утгуудыг хэвлэнэ */
void q_print(Queue *p)
{
        int i;
        for (i = 0; i < p->q_len; i++) {
                printf("%d ", p->q_arr[i]);
        }
        printf("\n");
}
