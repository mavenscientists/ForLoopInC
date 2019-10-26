  /**  
    * This program is free software: you can redistribute it and/or modify
    * it under the terms of the GNU General Public License as published by
    * the Free Software Foundation, either version 3 of the License, or
    * (at your option) any later version.
    * 
    * This program is distributed in the hope that it will be useful,
    * but WITHOUT ANY WARRANTY; without even the implied warranty of
    * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    * GNU General Public License for more details.
    * 
    * Copyright 2013 Maven Scientists http://mavenscientists.com
    */

 /**
   * @author	Maven Scientists (http://mavenscientists.com) 
   * @email	info@mavenscientists.com
   * ForLoop - This program describes the use of for loop
   */

#include<stdio.h>

int main()
{
	int i;

	for(i=0;i<10;i++) 
	{
		printf("%d\n",i);
	}
		/*
		Syntax:
		for(initialize;terminating condition; increment or decrement/flags)
		{
			// statements...
			st1;
			st2;
		}
		*/

	/*EXAMPLE:
		int n;
		for(i=1;i<=20;printf("%d\n",i))
		{
			i++;
		}
	// This Loop Will Print Numbers Upto Twenty(20).

	return 0;
}