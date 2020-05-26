= Decorating the chapters with Re:VIEW markup
To edit the chapters as you want,  we need to learn Re:VIEW markup with following official guide page.

@<href>{https://github.com/kmuto/review/blob/master/doc/format.md,Re:VIEW Format Guide}

As a example, Let’s convert this page first chapter into Re:VIEW one chapter. To do so, first, we make a new .re file and add it into catalog.yml. It will be like this.

//image[catalog3][]{
catalog3
//}

I added Pullingtheimage.re file and inserted the 4th line into catalog.yml.

Second,  set the content of Pullingtheimage.re file like following.

//list[Pullingtheimage.re][][.re]{
 = Pulling the image
 To pull Re:VIEW Docker image, run the following command from your command prompt.
 //list[PullVvwakameReview][][cmd]{
 docker pull vvakame/review
 //}
 In prompt, it will be like this.
 //image[pull-vvakame-review][]{
 [OnGoing]Pulling vvakame/review
 //}
 It will take some time to finish downloading the all pulled image data, but after it’s successfully done, it will be like this.
 //image[pull-vvakame-review-comp][]{
 [Complete]Pulling vvakame/review
 //}
//}
*Note: The example code above might have a space in each line. It's to avoid the example to be processed by Re:VIEW. When you try the example, you need to remove the spaces.

It will be like this.

//image[pullingtheimage][]{
pullingtheimage
//}

It has 2 Re:VIEW markups, //list and //image. Please check the detail  in the official document page.
Last, we need to place the picture files in to images folder in the book project. We can place the picture files. We can place the files in the images folder directory like this. You will notice that the folder has pictures for the book cover as default.

//image[picture][]{
picture
//}

To manage lots of pictures, you can make the chapter file name folder and place files in it. It will be like this. Re:VIEW system automatically retrieve the picture files and compile into one book file.

//image[picture2][]{
picture2
//}

With this knowledge, you can make your own EPUB/PDF file which you can use to sell in ebook market. Have a good ebook author life!!