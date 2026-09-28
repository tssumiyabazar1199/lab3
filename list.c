#include "DS.h"

/* p-ийн зааж буй List-д x утгыг төгсгөлд хийнэ */
void l_push_back(List *p, int x)
{
	if (p->l_len >= 100) return;
	p->l_arr[p->l_len] = x;
	p->l_len++;
}

/* p-ийн зааж буй List-д x утгыг эхэнд хийнэ
   Бүх элементүүд нэг нэг байрлал хойшилно.
 */
void l_push_front(List *p, int x)
{
	int i;
	if (p->l_len >= 100) return;
	for (i = p->l_len; i > 0; i--) {
		p->l_arr[i] = p->l_arr[i - 1];
	}
	p->l_arr[0] = x;
	p->l_len++;
}

/*
  p-ийн зааж буй List-д x утгыг pos байрлалд хийнэ
  pos болон түүнээс хойшхи элементүүд нэг байрлал ухарна.
  Тухайн байрлал List-ийн сүүлийн индексээс их бол төгсгөлд орно.
 */
void l_insert(List *p, int x, int pos)
{
	int i;
	if (p->l_len >= 100) return;
	if (pos >= p->l_len) {
		l_push_back(p, x);
		return;
	}
	if (pos < 0) pos = 0;

	for (i = p->l_len; i > pos; i--) {
		p->l_arr[i] = p->l_arr[i - 1];
	}
	p->l_arr[pos] = x;
	p->l_len++;
}

/* p-ийн зааж буй List-н эхлэлээс гаргана.
   List-ийн бүх элементүүд нэг нэг байрлал урагшилна
 */
void l_pop_front(List *p)
{
	int i;
	if (p->l_len <= 0) return;
	for (i = 0; i < p->l_len - 1; i++) {
		p->l_arr[i] = p->l_arr[i + 1];
	}
	p->l_len--;
}

/* p-ийн зааж буй List-н төгсгөлөөс гаргана */
void l_pop_back(List *p)
{
	if (p->l_len <= 0) return;
	p->l_len--;
}

/* p-ийн зааж буй List-н pos байрлалаас гаргана.
   pos болон түүнээс хойшхи элементүүд нэг байрлал урагшилна.
   pos байрлалаас гарах боломжгүй бол юу ч хийхгүй.
 */
void l_erase(List *p, int pos)
{
	int i;
	if (pos < 0 || pos >= p->l_len) return;
	for (i = pos; i < p->l_len - 1; i++) {
		p->l_arr[i] = p->l_arr[i + 1];
	}
	p->l_len--;
}

/* p-ийн зааж буй List-н утгуудыг хэвлэнэ */
void l_print(List *p)
{
	int i;
	for (i = 0; i < p->l_len; i++) {
		printf("%d ", p->l_arr[i]);
	}
	printf("\n");
}

/* p-ийн зааж буй List-с x тоог хайн олдсон байрлалаыг буцаана.
   Олдохгүй бол -1 утгыг буцаана.
 */
int l_search(List *p, int x)
{
	int i;
	for (i = 0; i < p->l_len; i++) {
		if (p->l_arr[i] == x) {
			return i;
		}
	}
	return -1;
}