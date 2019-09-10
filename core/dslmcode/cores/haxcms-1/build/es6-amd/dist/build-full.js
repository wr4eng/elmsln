define(["./build.js","./build-home.js","./build-legacy.js","./elmsln-build.js","./elmsln-build-edit.js","./elmsln-apps.js","../node_modules/@lrnwebcomponents/baseline-build-hax/baseline-build-hax.js","../node_modules/@lrnwebcomponents/haxcms-elements/lib/core/backends/haxcms-backend-beaker.js","../node_modules/@lrnwebcomponents/haxcms-elements/lib/core/backends/haxcms-backend-demo.js","../node_modules/@lrnwebcomponents/haxcms-elements/lib/core/backends/haxcms-backend-php.js","../node_modules/@lrnwebcomponents/haxcms-elements/lib/core/haxcms-editor-builder.js","../node_modules/@lrnwebcomponents/haxcms-elements/lib/core/haxcms-outline-editor-dialog.js","../node_modules/@lrnwebcomponents/haxcms-elements/lib/core/haxcms-site-builder.js","../node_modules/@lrnwebcomponents/haxcms-elements/lib/core/haxcms-site-editor-ui.js","../node_modules/@lrnwebcomponents/haxcms-elements/lib/core/haxcms-site-editor.js","../node_modules/@lrnwebcomponents/haxcms-elements/lib/core/site-list/haxcms-site-listing.js","../node_modules/@lrnwebcomponents/haxcms-elements/lib/core/haxcms-site-router.js","../node_modules/@lrnwebcomponents/haxcms-elements/lib/core/haxcms-site-store.js","../node_modules/@lrnwebcomponents/haxcms-elements/lib/core/HAXCMSThemeWiring.js","../node_modules/@lrnwebcomponents/haxcms-elements/lib/ui-components/active-item/site-active-title.js","../node_modules/@lrnwebcomponents/haxcms-elements/lib/ui-components/blocks/site-children-block.js","../node_modules/@lrnwebcomponents/haxcms-elements/lib/ui-components/navigation/site-breadcrumb.js","../node_modules/@lrnwebcomponents/haxcms-elements/lib/ui-components/navigation/site-menu-button.js","../node_modules/@lrnwebcomponents/haxcms-elements/lib/ui-components/navigation/site-menu.js","../node_modules/@lrnwebcomponents/haxcms-elements/lib/ui-components/navigation/site-top-menu.js","../node_modules/@lrnwebcomponents/haxcms-elements/lib/ui-components/query/site-render-query.js","../node_modules/@lrnwebcomponents/haxcms-elements/lib/ui-components/query/site-query.js","../node_modules/@lrnwebcomponents/haxcms-elements/lib/ui-components/query/site-query-menu-slice.js","../node_modules/@lrnwebcomponents/haxcms-elements/lib/ui-components/site/site-rss-button.js","../node_modules/@lrnwebcomponents/haxcms-elements/lib/ui-components/site/site-title.js","../node_modules/@lrnwebcomponents/haxcms-elements/lib/development/haxcms-dev-theme.js","../node_modules/@lrnwebcomponents/haxcms-elements/lib/development/haxcms-theme-developer.js","../node_modules/@lrnwebcomponents/haxcms-elements/lib/core/themes/haxcms-slide-theme.js","../node_modules/@lrnwebcomponents/haxcms-elements/lib/core/themes/haxcms-minimalist-theme.js","../node_modules/@lrnwebcomponents/haxcms-elements/lib/core/themes/haxcms-basic-theme.js","../node_modules/@lrnwebcomponents/haxcms-elements/lib/core/themes/haxcms-custom-theme.js","../node_modules/@lrnwebcomponents/haxcms-elements/lib/core/themes/haxcms-user-theme.js","../node_modules/@lrnwebcomponents/outline-player/outline-player.js","../node_modules/@lrnwebcomponents/simple-blog/simple-blog.js","../node_modules/@lrnwebcomponents/learn-two-theme/learn-two-theme.js","../node_modules/@lrnwebcomponents/haxor-slevin/haxor-slevin.js","../node_modules/@lrnwebcomponents/a11y-gif-player/a11y-gif-player.js","../node_modules/@lrnwebcomponents/citation-element/citation-element.js","../node_modules/@lrnwebcomponents/hero-banner/hero-banner.js","../node_modules/@lrnwebcomponents/image-compare-slider/image-compare-slider.js","../node_modules/@lrnwebcomponents/license-element/license-element.js","../node_modules/@lrnwebcomponents/lrn-aside/lrn-aside.js","../node_modules/@lrnwebcomponents/lrn-calendar/lrn-calendar.js","../node_modules/@lrnwebcomponents/lrn-math/lrn-math.js","../node_modules/@lrnwebcomponents/lrn-table/lrn-table.js","../node_modules/@lrnwebcomponents/lrn-vocab/lrn-vocab.js","../node_modules/@lrnwebcomponents/md-block/md-block.js","../node_modules/@lrnwebcomponents/lrndesign-blockquote/lrndesign-blockquote.js","../node_modules/@lrnwebcomponents/magazine-cover/magazine-cover.js","../node_modules/@lrnwebcomponents/media-behaviors/media-behaviors.js","../node_modules/@lrnwebcomponents/media-image/media-image.js","../node_modules/@lrnwebcomponents/meme-maker/meme-maker.js","../node_modules/@lrnwebcomponents/multiple-choice/multiple-choice.js","../node_modules/@lrnwebcomponents/paper-audio-player/paper-audio-player.js","../node_modules/@lrnwebcomponents/person-testimonial/person-testimonial.js","../node_modules/@lrnwebcomponents/place-holder/place-holder.js","../node_modules/@lrnwebcomponents/q-r/q-r.js","../node_modules/@lrnwebcomponents/full-width-image/full-width-image.js","../node_modules/@lrnwebcomponents/self-check/self-check.js","../node_modules/@lrnwebcomponents/simple-concept-network/simple-concept-network.js","../node_modules/@lrnwebcomponents/stop-note/stop-note.js","../node_modules/@lrnwebcomponents/tab-list/tab-list.js","../node_modules/@lrnwebcomponents/task-list/task-list.js","../node_modules/@lrnwebcomponents/video-player/video-player.js","../node_modules/@lrnwebcomponents/wave-player/wave-player.js","../node_modules/@lrnwebcomponents/wikipedia-query/wikipedia-query.js","../node_modules/@lrnwebcomponents/lrndesign-timeline/lrndesign-timeline.js","../node_modules/@lrnwebcomponents/lrndesign-gallery/lrndesign-gallery.js","../node_modules/@lrnwebcomponents/html-block/html-block.js","../node_modules/@lrnwebcomponents/user-action/user-action.js","../node_modules/@lrnwebcomponents/rss-items/rss-items.js","../node_modules/@lrnwebcomponents/grid-plate/grid-plate.js"],function(_build,_buildHome,_buildLegacy,_elmslnBuild,_elmslnBuildEdit,_elmslnApps,_baselineBuildHax,_haxcmsBackendBeaker,_haxcmsBackendDemo,_haxcmsBackendPhp,_haxcmsEditorBuilder,_haxcmsOutlineEditorDialog,_haxcmsSiteBuilder,_haxcmsSiteEditorUi,_haxcmsSiteEditor,_haxcmsSiteListing,_haxcmsSiteRouter,_haxcmsSiteStore,_HAXCMSThemeWiring,_siteActiveTitle,_siteChildrenBlock,_siteBreadcrumb,_siteMenuButton,_siteMenu,_siteTopMenu,_siteRenderQuery,_siteQuery,_siteQueryMenuSlice,_siteRssButton,_siteTitle,_haxcmsDevTheme,_haxcmsThemeDeveloper,_haxcmsSlideTheme,_haxcmsMinimalistTheme,_haxcmsBasicTheme,_haxcmsCustomTheme,_haxcmsUserTheme,_outlinePlayer,_simpleBlog,_learnTwoTheme,_haxorSlevin,_a11yGifPlayer,_citationElement,_heroBanner,_imageCompareSlider,_licenseElement,_lrnAside,_lrnCalendar,_lrnMath,_lrnTable,_lrnVocab,_mdBlock,_lrndesignBlockquote,_magazineCover,_mediaBehaviors,_mediaImage,_memeMaker,_multipleChoice,_paperAudioPlayer,_personTestimonial,_placeHolder,_qR,_fullWidthImage,_selfCheck,_simpleConceptNetwork,_stopNote,_tabList,_taskList,_videoPlayer,_wavePlayer,_wikipediaQuery,_lrndesignTimeline,_lrndesignGallery,_htmlBlock,_userAction,_rssItems,_gridPlate){window.process={env:{NODE_ENV:"production"}}});