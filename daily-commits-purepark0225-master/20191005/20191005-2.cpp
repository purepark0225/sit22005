// 유튜브 강의 - Pointers

main() {
	int i, *ptr = NULL;

	printf("address of i = %p\n", &i);
	printf("address of *iptr = %p\n", iptr);
	printf("*iptr = %d\n", *iptr);
}

'''
void 포인터에서는 어떤 타입의 포인터든 수용 가능
void 포인터에서는 dereferencing 불가

void * <- &(Data object)
void * -> *Data object	(불가)

int main()
{
	int a;
	void* pvoid = &a; -> 가능
	*pvoid = 10; -> 불가 (타입을 알 수 없기 때문에)
		=> *((int*)pvoid)=10; (포인터에 타입을 주면 가능)
	return 0;
}

object에 주소를 넘겨 줄 때 사용

'''


