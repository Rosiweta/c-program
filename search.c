int search_book(char (*book_name)[30], char (*auth_name)[30], char (*publ_name[30], int num_total_book)

{
	int user_input;
	int i;
	char user_search[30];

	printf("search for : \n")
	printf("1. search title \n");
	printf("2. search author \n");
	printf("3. search publisher \n");
	printf("%d",&user_input);

	printf("enter word to search : ");
	scanf("%s", &user_search);

	printf("--result-- \n");

	if(user_input == 1 )
	{
		for(i=0; i<num_total_book; i++)
			{
				if(compare(book_name[i], user_search))
				{printf("no : %d title : %s publisher : %s \n", i,book_name[i], auth_name[i], publ_name[i]); }
			}
	}


	else if(user_input == 2 )
	{
		for(i=0; i<num_total_book; i++)
			{
				if(compare(auth_name[i], user_search))
				{printf("no : %d title : %s publisher : %s \n", i,book_name[i], auth_name[i], publ_name[i]); }
			}
	}



	else if(user_input == 3 )
	{
		for(i=0; i<num_total_book; i++)
			{
				if(compare(publ_name[i], user_search))
				{printf("no : %d title : %s publisher : %s \n", i,book_name[i], auth_name[i], publ_name[i]); }
			}
	}





return 0;

}
