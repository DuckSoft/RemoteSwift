var xmlhttp = new XMLHttpRequest();
var DOURL = "do.exe";

function bind(item, func) {
    document.getElementById(item).onclick = func;
}

function send(n) {
    xmlhttp.open("GET", DOURL + "?act=" + n, false);
    xmlhttp.send();
}

bind("action-p",function(){send(1);});
bind("action-n",function(){send(2);});
bind("page-p",function(){send(3);});
bind("page-n",function(){send(4);});
bind("start",function(){send(5);});
bind("stop",function(){send(6);});
bind("black",function(){send(7);});
bind("white",function(){send(8);});
