= Adjust the project config
Because the system is for Japanese in default, let’s change it to English mode. To do so, we need to edit config.yml file in the project folder. When you open it, it will be like this.

//image[configyml1][]{
config.yml-1
//}

To change the language, replace ja to en after language: in line 21.
To change the book file name, replace book to your preferred name “ex:: MyBook” after bookname: in line 19.
To change the book title, replace Re:VIEWサンプル書籍 to your preferred title “ex:: My Book!!” after booktitle: in line 25.
To change the book auther, replace [“青木峰郎”, “武藤健志”, “高橋征義”, “角征典”] to your name “ex:: [“Tomoya Yamanaka”]” after aut: in line 29.
After applying all the changes, config.yml file will be like following.

//image[configyml2][]{
config.yml-2
//}

Let’s run review-pdfmaker config.yml command again to see your book PDF!

//image[pdfbookinenglish][]{
PDF Book In English
//}

Not only PDF, but also other formats, EPUB, HTML and Text, you can output.

For EPUB, the command is this.

//list[review-epubmaker][][cmd]{
review-epubmaker config.yml
//}

The created EPUB file is like this.

//image[epub1][]{
Epub
//}

For HTML, the command is this.

//list[review-webmaker][][cmd]{
review-webmaker config.yml
//}

The created HTML files are generated in webroot folder. And it’s like this.

//image[html][]{
HTML
//}

For Text, the command is this.

//list[review-textmaker][][cmd]{
review-textmaker config.yml
//}

The created text files are in “book file name”-text folder Ex::MyBook-text. And it’s like this.

//image[text][]{
Text
//}