window.addEventListener('hax-store-ready', function(e) {
    // give the web components a second to build
    setTimeout(function() {
        const tray = document.querySelector("hax-tray");
        tray.shadowRoot.querySelector(".collapsed").style.margin = "160px 0px 0px";
    }, 1000);
  });