<script>
var a = 5;
var b = 10;
var c = a + b;
console.log(c);
document.write("<h1>"+c+"</h1>");
window.alert(c);
document.write('<p id="js"><?p>');
document.getElementById("js").innerHTML = c;
</script>

<script>
var a = parseInt(prompt('Podaj bok a: '));
var b = parseInt(prompt('Podaj bok b: '));
var c = parseInt(prompt('Podaj bok c: '));
document.write(a + b + c);
if (a+b>c && a+c>b && c+b>a) {
	window.alert('da się!');
} else {
	window.alert('nie da się :(')
}
</script>

<script>
var dlugosc = 10; //liczba
var imie = "Dorota"; //string
var osoba = {imie: "Adam", nazwisko:"Słodowy"};
</script>
