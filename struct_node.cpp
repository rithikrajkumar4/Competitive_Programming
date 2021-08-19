struct node
{
	int datal
	node *next;
	node *prev;
}*first;
void insert(struct node *first , int x)
{
	// Assuming to insert in first location ie. before first;
	if (!isfull())
	{
		struct node *t = (struct node *)malloc(sizeof(struct node));
		t->data = x;
		t->prev = NULL;
		t->next = first;
		first = t;
	}
}