# /C-programming/
- Задания по процедурному программированию на Си, для первых курсов ИТ. 

Пользуйтесь на здоровье, но не забывайте об авторских правах. © 

И всегда изменяйте названия переменных. 
Good Luck ;) 

<p align = "center">
<img src = "https://betanews.com/wp-content/uploads/2016/11/C-language.jpg" width = "500" heigth = "500" align = "center">
</p>


<label>
<input type="checkbox" name="checkboxName" class="checkbox"/>
<div class="switch"></div>
</label>

<style>
        .checkbox{display:none}
.switch
{
width: 62px;
height: 32px;
background: #E5E5E5;
z-index: 0;
margin: 0;
padding: 0;
appearance: none;
border: none;
cursor: pointer;
position: relative;
border-radius:16px; //IE 11
-moz-border-radius:16px; //Mozilla
-webkit-border-radius:16px; //Chrome и Safari
}
.switch:before
{
content: ' ';
position: absolute;
left: 1px;
top: 1px;
width: 60px;
height: 30px;
background: #FFFFFF;
z-index: 1;
border-radius:16px; //IE 11
-moz-border-radius:16px; //Mozilla
-webkit-border-radius:16px; //Chrome и Safari
}
.switch:after 
{
content: ' ';
height: 29px;
width: 29px;
border-radius: 28px;
background: #FFFFFF;
position: absolute;
z-index: 2;
top: 1px;
left: 1px;
-webkit-transition-duration: 300ms;
transition-duration: 300ms;
-webkit-box-shadow: 0 2px 5px #999999;
box-shadow: 0 2px 5px #999999;
}
.switchOn , .switchOn:before
{
background: #4cd964 !important;
}
.switchOn:after
{
left: 21px !important;
}
<script src="http://ajax.googleapis.com/ajax/libs/jquery/2.1.1/jquery.min.js"></script>
<script>
$(document).ready(function()
{

$('.switch').click(function()
{
$(this).toggleClass("switchOn");
});

});
</script>
