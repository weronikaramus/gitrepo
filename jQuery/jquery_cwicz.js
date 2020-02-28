$(document).ready(function(){
	$(".wynik").text("Nowa treść");
	console.log(($("p").text()));
	$("#przycisk").click(function(){
		var vnk = parseInt($("#vnk").val());
		var nk = parseInt($("#nk").val());
		var R = vnk / nk * 100;
		var div2 = '<div class="wynik">'+R+'</div>';
		$("div.wynik").after(div2);
	});
	$("input").mouseover(function(){
		$(this).addClass("tloBlue");
	});
	$("input").mouseleave(function(){
		$(this).removeClass("tloBlue");
	});
	$("#img1").dblclick(function(){
  		$("#img1").hide(100);
	});
	$("#img2").mouseover(function(){
		$("#img2").hide(100);
	});
	$("#img3").click(function(){
  		$("#img4").hide(100);
	});
	$("#img4").click(function(){
  		$("#img3").hide(100);
	});
	$("#img4").mouseleave(function(){
  		$("#img3").show(100);
	});
	$("#img3").mouseleave(function(){
  		$("#img4").show(100);
	});
});