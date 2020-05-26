= Add the project content
We now know how to generate book files, but the content is nothing yet. Let’s add it!
To add book content, open the catalog.yml file in the project folder. It will be like this.

//image[catalog][]{
Catalog
//}

In default, only “book project name”.re is defined in CHAPS: which means chapter. In the example above, my-book.re is the only defined content. It’s content is this.

//image[chapre][]{
Chap.re
//}

The content is only “= “.
Let’s change it like following.

//list[1.re][][.re]{
= Chapter Title
This is chapter paragraph!
//}

It will be like this.

//image[chapre2][]{
Chap.re2
//}

Then, make the PDF again and check the content.

//image[pdf1][]{
PDF 1
//}

The modification in my-book.re is applied as the update of Chapter 1. As next step, let’s make “book project name”2.re ex::my-book2.re file and set the content like following.

//list[2.re][][.re]{
= Added Chapter!
This is newly added chapter paragraph!
//}

It will be like this.

//image[chap2re][]{
Chap2.re
//}

And add the file name into catalog.yml CHAPS: section. It will be like this.

//image[catalog2][]{
catalog2
//}

Note that there is ” – ” before the file name. It is also needed.
Then again, make the PDF again and check the content.

//image[pdf2][]{
PDF 2
//}

Now, new chapter is added.