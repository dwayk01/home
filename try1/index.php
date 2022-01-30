<?php
    if(isset($_POST['ipload'])){

        $file_name = $_FILES['file']['name'];
        $file_type = $_FILES['file']['type'];
        $file_size = $_FILES['file']['size'];
        $file_tem_loc = $_FILES['file']['tmp_name'];
        $file_store = "uploade/".$file_name;

        if(move_uploaded_file($file_tmp_loc, $file_store)){
            echo "Files are Uploaded"
        }
    }


?>
<!DOCTYPE html>
<html>
  <head>
    <title>file upload try</title>
  </head>
  
  <body>
    <form action="upload.php" method="POST" enctype="multipart/form-data">
      <label>winter night try1 upload</label>
      <p><input type="file" name="file"/></p>
      <p><input type="submit" nmae="upload1" value="Upload Image"></p>
    </form>
      
  </body>
</html>
