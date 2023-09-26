var x=0
var array = Array()
function add_element_to_array()
{
    array[x] = document.getElementById("text1").value
    alert("Element: " + array[x] + " Added at Index "+ x)
    x++;
    document.getElementById("text1").value="";
}

function display_array()
{
    document.getElementById("Result").innerHTML = "Array = ["+array+"] "
}

function rev()
{
    // event.preventDefault()
    console.log(array.reverse())
    document.getElementById("name").innerHTML = "Reversed Array = " + array.reverse()
}