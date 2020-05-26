= Run the image with sharing the working folder
Now, You will run the image but you should make and share a working folder for your book making. In following commands, c:\bookmaking folder is created with mkdir command and the folder is shared Re:VIEW Docker image and run.

//list[RunVvwakameReview][][cmd]{
mkdir "creating working folder path. Ex::c:\bookmaking"
docker run -ti -v "created working folder path:/working folder name Ex::c:\bookmaking:/bookmaking" vvakame/review /bin/bash
//}

In prompt, it will be like this.

//image[run][]{
cmd
//}