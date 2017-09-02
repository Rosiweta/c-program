int borrow_book(int *borrowd)
{
	int book_num;

	printf("tell us the number you'll gonna borrow \n");
	printf("book number : ");
	scanf("%d", &book_num);

	if(borrowed[book_num] == 1)
		{printf("already borrowed \n")};

	else
		{
			printf("book has successfully borrowed \n");
			borrowed[book_num] = 1;
		}

	return 0;
}

