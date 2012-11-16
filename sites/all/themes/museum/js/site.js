//Authors: Irving Briscoe, Brian Saycocie
(function ($) {
  // Store our function as a property of Drupal.behaviors.
  Drupal.behaviors.catalogmenu = {    
    attach: function (context, settings) {
      //jQuery starts
	  
		/**
		 * Animate hover state to main nav drop down
		 
		 
		$('#main-menu li.expanded > a').each(function(){
			$(this).mouseenter(function(){
				$(this).find('.menu').show();
			});
			$(this).mouseleave(function(){
				$(this).find('.menu').hide();
			});
		});*/
		
		/**
		 * Animate hover state to Exhibits tiles
		 */
		
	  $('.view-exhibit-list .node-teaser').each(function(){
			$(this).mouseenter(function(){
				$(this).find('.content').fadeIn('fast');
			});
			$(this).mouseleave(function(){
				$(this).find('.content').fadeOut('fast');
			});
		});
		
		$('.view-exhibits-front .node-teaser').each(function(){
			$(this).mouseenter(function(){
						$(this).find('.content').fadeIn('fast');
			});
			$(this).mouseleave(function(){
						$(this).find('.content').fadeOut('fast');
			});
		});
		
		/**
		 * Animate hover state to header buttons
		 */
		 
		$('#header .header-buttons a').hover(function(){
			$(this).animate({top:'0px'},{queue:false,duration:300});
		}, function(){
			$(this).animate({top:'-40px'},{queue:false,duration:300});
		});
		
		/**
		 * Scroll to animate on click to id
		 */
		 
		$('a[href^="#"]').bind('click.smoothscroll',function (e) {
			e.preventDefault();
			var target = this.hash,
				$target = $(target);
			$('html, body').stop().animate({
				'scrollTop': $target.offset().top
			}, 500, 'swing', function () {
				window.location.hash = target;
			});
		});
			
    }
  }
})(jQuery);

