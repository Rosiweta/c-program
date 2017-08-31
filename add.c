int add_book(char (*book_name)[30], char (*auth_name)[30], char (*publ_name)[30], int *borrowd, int *num_total_book)

{
	printf("title of the book you want to add : ");
	scanf("%s", book_name[*num_total_book]);

	printf("author of the book you want to add : ");
	scanf("%s", auth_name[*num_total_book]);

	printf("publisher of the book you want to add : ");
	scanf("%s", publ_name[*num_total_book]);

	borrowed[*num_total_book] = 0;
	printf("finished adding! \n");
	(*num_total_book)++;


return 0;

}
