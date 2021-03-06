## Circular Linked List
- 원형 연결리스트
- tail 노드가 NULL을 가리키지 않고 다시 head를 가리키는 형태
- 모든 포인터가 다음 노드로 연결되어있기 때문에 cycle 구조의 자료의 구현에 유용
- 본 예제에서는 원형이기 때문에 tail 없이 head 만 사용함
- singly circular, doubly circular 두 경우 모두 가능한데 여기서는 연습을 위해 prev까지 들어있는 노드를 기본 단위로 하여 doubly로 구현
<br>

## Nadarm's Exercise
- [예제 원본](https://github.com/nadarm/42-algorithm/tree/master/linked_list/circular_linked_list)


#### 리스트생성/삭제
- 새로운 리스트를 할당하고 초기화함. 이 때 head와 tail의 값은 0 으로 초기화함
- 제거시 리스트에 할당된 메모리를 해제함. 이 때 각 요소와 목록 모두 해제해야 함
- 관련예제 : [리스트생성](./list_init), [리스트제거](./free_list.c)

#### 노드생성
- 새로운 노드를 할당하고 초기화함
- 관련예제 : [노드생성](./create_elem.c)

#### 탐색연산
- n번째를 탐색할 때, 단일/이중 연결리스트와 다르게 n이 0보다 작거나 list->size 보다 크더라도 순환하여 탐색할 수 있다고 가정
    - 원형 연결리스트는 헤드에서 -1번째로 가거나 tail에서 +1번째로 가더라도더 언제나 노드에 접근이 가능하기 때문
- 관련예제 : [n번째노드반환](./list_get.c), [값탐색](list_find.c), [노드수반환](./list_size.c), [각노드에함수적용](./list_foreach)

#### 삽입연산
1. 리스트가 비어있는 경우
2. 리스트가 비어있지 않은 경우
    - head에 새 노드를 삽입할 경우
    - 그 외의 경우
- 관련예제 : [n번째삽입](./list_add.c)

#### 삭제연산
1. 노드가 하나일 경우
2. 노드가 두 개 이상일 경우
    - head를 삭제할 경우
    - 그 외의 경우
- 관련예제 : [n번째노드삭제](./list_remove.c), [전체노드삭제](./list_clear.c)

#### 헤드변경
- list에서 head가 가리키는 노드가 0번일 때, head를 이동하는 연습
- 관련예제 : [head를다음으로이동](./list_move_head_to_next), [head를이전으로이동](./list_move_head_to_next)

<br>

[맨 위로](#circular-linked-list)
